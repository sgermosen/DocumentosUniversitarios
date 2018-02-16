//
// @author:
//    Dr. Roger Doss
//    http://www.rdoss.com
//    OpenSource@rdoss.com
//    
// This software is distributed under the terms and conditions
// of the GNU Public License (GPLv2).
//
#ifndef _MATRIX_H
#define _MATRIX_H

#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>
#include <sstream>

using namespace std;

template <class T>
class matrix {
   public:
   typedef vector<vector<T> > matrix_t;
   typedef vector<T> matrix_row_t;
   typedef vector<T> matrix_col_t;

   private:
   matrix_t m;
   int row, col;

   public:
   // CTOR
   matrix()
      : row(0),col(0)
   {
   }
   // CTOR
   matrix(int _row, int _col)
      : row(_row),col(_col)
   {
      m.resize(row);
      for(int i = 0; i < row; i++) {
         m[i].resize(i);
      }
   }
   virtual ~matrix()
   {
   }
   matrix(const matrix<T> &obj)
   {
         this->m   = obj.m;
         this->row = obj.row;
         this->col = obj.col;
   }
   matrix<T> &operator=(const matrix<T> &obj)
   {
      if(this != &obj) {
         this->m   = obj.m;
         this->row = obj.row;
         this->col = obj.col;
      } else {
         return *this;
      }
      
   }
   // Manipulators.
   void resize(int _row, int _col)
   {
      row = _row;
      col = _col;
      m.resize(row);
      for(int i = 0; i < row; i++) {
         m[i].resize(col);
      }
   }
   void add_row(int _row, matrix_col_t &_col)
      throw(runtime_error)
   {
      if(_row >= (row + 1) || _row < 0) {
         throw runtime_error("matrix<T>::add_row:: row out-of-bounds");
      }
      matrix_t tmp;
      tmp.resize(row + 1);
      for(int i = 0; i < (row + 1); i++) {
         tmp[i].resize(col);
      }
      for(int i = 0; i < _row; i++) {
         for(int j = 0; j < col; j++) {
            tmp[i][j] = m[i][j];
         }
      }
      for(int j = 0; j < col; j++) {
         tmp[_row][j] = _col[j];
      }
      for(int i = _row + 1, ii = _row; ii < row; i++, ii++) {
         for(int j = 0; j < col; j++) {
            tmp[i][j] = m[ii][j];
         }
      }
      m = tmp;
      row = row + 1;
   }
   void del_row(int _row)
   {
      matrix_t tmp;
      tmp.resize(row - 1);
      for(int i = 0; i < (row - 1); i++) {
         tmp[i].resize(col);
      }
      for(int i = 0; i < _row; i++) {
         for(int j = 0; j < col; j++) {
            tmp[i][j] = m[i][j];
         }
      }
      for(int i = _row + 1, ii = _row; i < row; i++, ii++) {
         for(int j = 0; j < col; j++) {
            tmp[ii][j] = m[i][j];
         }
      }
      m = tmp;
      row = row - 1;
   }
   void add_col(int _col, matrix_row_t &_row)
      throw(runtime_error) 
   {
      if(_col >= (col + 1) || _col < 0) {
         throw runtime_error("matrix<T>::add_col:: col out-of-bounds");
      }
      matrix_t tmp;
      tmp.resize(row);
      for(int i = 0; i < row; i++) {
         tmp[i].resize(col + 1);
      }
      for(int i = 0; i < row; i++) {
         for(int j = 0; j < _col; j++) {
            tmp[i][j] = m[i][j];
         }
      }
      for(int j = 0; j < row; j++) {
         tmp[j][_col] = _row[j];
      }
      for(int i = 0; i < row; i++) {
         for(int j = _col + 1, jj = _col; jj < col; j++, jj++) {
            tmp[i][j] = m[i][jj];
         }
      }
      m = tmp;
      col = col + 1;
   }
   void del_col(int _col)
   {
      matrix_t tmp;
      tmp.resize(row);
      for(int i = 0; i < row; i++) {
         tmp[i].resize(col - 1);
      }
      for(int i = 0; i < row; i++) {
         for(int j = 0; j < _col; j++) {
            tmp[i][j] = m[i][j];
            //cout <<  m[i][j] << " , ";
         }
      }
      for(int i = 0; i < row; i++) {
         for(int j = _col + 1, jj = _col; j < col; j++, jj++) {
            tmp[i][jj] = m[i][j];
            //cout <<  m[i][j] << " , ";
         }
      }
      m = tmp;
      col = col - 1;
   }
   // Input/Output.
   friend
   ostream &operator<<(ostream &out, matrix &obj)
   {
      out << " { " << endl;
      for(int i = 0; i < obj.row; i++) {
         for(int j = 0; j < obj.col; j++) {
            if(j == (obj.col-1)) {
               out << obj.m[i][j] << endl;
            } else if(j == 0) {
               out << "   " << obj.m[i][j] << " , ";
            } else {
               out << obj.m[i][j] << " , ";
            }
         }
      }
      out << " } " << endl;
      return out;
   }
   string stream_out() const
   {
      ostringstream out;
      out << row << " " << col << " ";
      for(int i = 0; i < row; i++) {
         for(int j = 0; j < col; j++) {
            out << m[i][j] << " ";
         }
      }
      return out.str();
   }
   void stream_in(string _m)
   {
      istringstream in(_m,istringstream::in);
      in >> row;
      in >> col;
      m.resize(row);
      for(int i = 0; i < row; i++) {
         m[i].resize(col);
      }
      for(int i = 0; i < row; i++) {
         for(int j = 0; j < col; j++) {
            in >> m[i][j];
         }
      }
   }
   string to_html() const
   {
      ostringstream out;
      out << "<table border=\"1\">" << endl;
      for(int i = 0; i < row; i++) {
         out << "<tr>" << endl;
         for(int j = 0; j < col; j++) {
            out << "<td>" << m[i][j] << "</td>" << endl;
         }
         out << "</tr>" << endl;
      }
      out << "</table>" << endl;
      return out.str();
   }
   // Accessors.
   matrix_t &get_data()
   {
      return m;
   }
   int get_row() const
   {
      return row;
   }
   int get_col() const
   {
      return col;
   }
   matrix_col_t get_row(int _row) const
   {
      matrix_col_t c;
      c.resize(col);
      for(int i = 0; i < col; i++) {
         c[i] = m[_row][i];
      }
      return c;
   }
   matrix_row_t get_col(int _col) const
   {
      matrix_row_t r;
      r.resize(row);
      for(int i = 0; i < row; i++) {
         r[i] = m[i][_col];
      }
      return r;
   }
};

#endif
