///////////////////////////////////////////////////////////
//  matrix2.h
//  Implementation of the Class matrix
//  Created on:      02-Nov-2011 7:03:58 PM
//  Original author: SHS
///////////////////////////////////////////////////////////

#if !defined(EA_1A50EEA9_2D54_416c_B454_E243EFC3DF58__INCLUDED_)
#define EA_1A50EEA9_2D54_416c_B454_E243EFC3DF58__INCLUDED_

template<class T>
class matrix
{

public:
	typedef vector<vector<T> > matrix_t;

	typedef vector<T> matrix_row_t;

	typedef vector<T> matrix_col_t;
	vector<T> matrix_col_t;
	vector<T> matrix_row_t;
	vector< vector<T> >  matrix_t;

	matrix()
	    : row(0),col(0)
	{

	}
	matrix(int _row, int _col)
	    : row(_row),col(_col)
	{

	}
	matrix(const matrix<T>& obj){

	}
	virtual ~matrix(){

	}
	void add_col(int _col, matrix_row_t& _row) throw (runtime_error){

	}
	void add_row(int _row, matrix_col_t& _col) throw (runtime_error){

	}
	void del_col(int _col){

	}
	void del_row(int _row){

	}
	int get_col() const{

		return 0;
	}
	matrix_row_t get_col(int _col) const{

		return  NULL;
	}
	matrix_t & get_data(){

		return  NULL;
	}
	int get_row() const{

		return 0;
	}
	matrix_col_t get_row(int _row) const{

		return  NULL;
	}
	friend ostream & operator<<(ostream& out, matrix& obj){

		return  NULL;
	}
	matrix<T> & operator=(const matrix<T>& obj){

		return  NULL;
	}
	void resize(int _row, int _col){

	}
	void stream_in(string _m){

	}
	string stream_out() const{

		return  NULL;
	}
	string to_html() const{

		return  NULL;
	}

private:
	int col;
	matrix_t m;
	int row;

};
#endif // !defined(EA_1A50EEA9_2D54_416c_B454_E243EFC3DF58__INCLUDED_)
