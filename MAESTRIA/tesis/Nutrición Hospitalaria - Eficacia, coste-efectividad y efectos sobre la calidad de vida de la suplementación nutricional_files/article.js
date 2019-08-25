    var text = "";
    var main = this;    
    var wLattes = null;
    var wInfo = null;
    var IE4 = (document.all && !document.getElementById) ? true : false;
    var NS4 = (document.layers) ? true : false;
    var IE5 = (document.all && document.getElementById) ? true : false;
    var NS6 = (document.getElementById && !document.all) ? true : false;
    var language = "";
    
    /*****************************************************************************************************************
    function OpenLattesWindow ()
    
    Opens a 200x200 resizable+scrollbars window in the upper-right corner of the screen for the data of Lattes System. 
    
    The contents of the new window is present in the text variable (no url is passed). The content of the text variable 
    is available after the call of the following functions: CreateWindowHeader(), InsertAuthor() and CreateWindowFooter().
    
    Parameters: None
    Return Value: None
    *****************************************************************************************************************/
    function OpenLattesWindow ()
    {
    	if ( text == "" ) return;

        var left = screen.availWidth - 200;

    	if ( wLattes && !wLattes.closed )
    	{
    		wLattes.focus();
    		return;
    	}
                        
        wLattes = OpenWindow ( "_Lattes", 0, left, 200, 200, "" );
    	wLattes.document.open ();
    	wLattes.document.write ( text );
    	wLattes.document.close ();        
    }
    
    /*****************************************************************************************************************
    function CloseLattesWindow ()
    Close the Lattes Window.
    
    Parameters: None
    Return Value: None
    *****************************************************************************************************************/
    function CloseLattesWindow ()
    {
        CloseWindow ( wLattes );
    }

    /***************************************************************************************************************** 
    function CreateWindowHeader ()    
    Creates the header of the Lattes window.
    
    Parameters:
        title: Title of the window
        imgsrc: Source (uri) of the lattes image
        lng: Interface Language
        
    Return Value: None
    *****************************************************************************************************************/
    function CreateWindowHeader(title, imgsrc, lng)
    {
		text  = "<html>\n";
		text += " <head>\n";
		text += "  <title>" + title + "</title>\n";

		text += " </head>\n";
		text += " <body bgcolor=\"#FFFFFF\" link=\"#000080\" vlink=\"#800080\">\n";
		text += "  <form>\n";
        
        text += "   <table width=\"100%\">\n";
        text += "    <tr>\n";
		text += "    <td width=\"50%\" valign=\"center\"><img src=\"" + imgsrc + "\"></td>\n";
		text += "    <td width=\"50%\" valign=\"center\" align=\"right\">\n";
    	text += "      <font face=\"Verdana\" size=\"2\">\n"; 
        text += "      <a href=\"javascript:void(0)\" onclick=\"self.close();\">"
                
        switch (language)
        {
            case 'es': text += "Cerrar"; break;
            case 'pt': text += "Fechar"; break;
            default:   text += "Close"; 
        }
        text += "</a>\n"
        text += "     </font>\n";
        text += "    </td>\n";
        text += "    </tr>\n";
        text += "   </table><br>\n";
        
		text += "   <table>\n";    
        language = lng;
    }
    
    /***************************************************************************************************************** 
    function InsertAuthor ()    
    Inserts an author in the Lattes window.
    
    Parameters:
        author: Name of the author
        url: Url of the curriculum

    Return Value: None

    *****************************************************************************************************************/    
    function InsertAuthor ( author, url )
    {
    	text += "    <tr>\n"; 
    	text += "     <td valign=\"top\"><font face=\"Symbol\">·</font>&nbsp;</td>\n"; 
    	text += "     <td>\n"; 
    	text += "      <font face=\"Verdana\" size=\"2\">\n"; 
    	text += "       <a href=\"javascript:void(0)\" onclick=\"opener.location='"; 
    	text += url;
    	text += "'; self.close();\" onmouseover=\"opener.status='"; 
    	text += url;
        text += "'; return true;\" onmouseout=\"opener.status='';\">"; 
    	text += author; 
    	text += "</a>\n"; 
    	text += "      </font>\n"; 
    	text += "     </td>\n"; 
    	text += "    </tr>\n";         
    }
    
    /***************************************************************************************************************** 
    function CreateWindowHeader ()    
    Creates the footer of the Lattes window.
    
    Parameters: None
    Return Value: None
    *****************************************************************************************************************/    
    function CreateWindowFooter ()
    {
		text += "   </table>\n";
		text += "  </form>\n";
		text += " </body>\n";
		text += "</html>\n";
    } 
    
    /*****************************************************************************************************************
    function OpenArticleInfoWindow ()

    Opens the window of Informations about the article.
    
    Parameters:
        wHeight: Height of the window (pixels)
        wWidth: Width of the window (pixels)
        url: URL to load

    Return Value: none
    *****************************************************************************************************************/
    function OpenArticleInfoWindow ( wWidth, wHeight, url )    
    {
    	if ( wInfo && !wInfo.closed )
    	{
    		wInfo.focus();
    		/* return; */
    	}
                            
        wInfo = OpenWindow ( "_Info", 0, 0, wWidth, wHeight, url );
    }
    
    /*****************************************************************************************************************
    function CloseArticleInfoWindow ()
    Closes the Article's Info Window.
    
    Parameters: None
    Return Value: None
    *****************************************************************************************************************/
    function CloseArticleInfoWindow ()
    {
        CloseWindow ( wInfo );
    }

    /*****************************************************************************************************************         
    function OpenWindow ()
    Opens a resizable+scrollbars window.
    
    Parameters:
        name: Window name
        wTop: Coordinate of top of the window (screen coordinate)
        wLeft: Coordinate of left edge of the window (screen coordinate)
        wHeight: Height of the window (pixels)
        wWidth: Width of the window (pixels)
        url: URL to load
        
    Return value:
        Window reference
    *****************************************************************************************************************/    
    function OpenWindow ( name, wTop, wLeft, wWidth, wHeight, url )    
    {    	            
        var w = null;
        
    	features = "resizable=1,scrollbars=1,height=" + wHeight + ",width=" + wWidth;
    
    	if ( NS4 || NS6 )
    	{
    		features += ",screenY=" + wTop + ",screenX=" + wLeft;
    	}
    	else
    	{
    		features += ",top=" + wTop + ",left=" + wLeft;
    	}
    
    	w = open ( url, name, features );
        
        return w;
    }
    
    /***************************************************************************************************************** 
    function CloseWindow ()
    Try to close a window if its handle is not null and the window is not closed.
    
    Parameters:
        w: Window reference
    *****************************************************************************************************************/    
    function CloseWindow ( w )
    {
    	if ( w && !w.closed )
    	{
    		w.close();
    	}
    }
        