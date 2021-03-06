//==============================================================================
//  WARNING!!  This file is overwritten by the Block Styler while generating
//  the automation code. Any modifications to this file will be lost after
//  generating the code again.
//
//       Filename:  C:\Users\Administrator\Desktop\vs\menu_block\BlockResverseExtrude.hpp
//
//        This file was generated by the NX Block Styler
//        Created by: Administrator
//              Version: NX 8.5
//              Date: 04-21-2016  (Format: mm-dd-yyyy)
//              Time: 16:49
//
//==============================================================================

#ifndef BLOCKRESVERSEEXTRUDE_H_INCLUDED
#define BLOCKRESVERSEEXTRUDE_H_INCLUDED

//------------------------------------------------------------------------------
//These includes are needed for the following template code
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Namespaces needed for following template
//------------------------------------------------------------------------------
using namespace std;
using namespace NXOpen;
using namespace NXOpen::BlockStyler;

class DllExport BlockResverseExtrude
{
    // class members
public:
    static Session *theSession;
    static UI *theUI;
    BlockResverseExtrude();
    ~BlockResverseExtrude();
    int Show();
    
    //----------------------- BlockStyler Callback Prototypes ---------------------
    // The following member function prototypes define the callbacks 
    // specified in your BlockStyler dialog.  The empty implementation
    // of these prototypes is provided in the BlockResverseExtrude.cpp file. 
    // You are REQUIRED to write the implementation for these functions.
    //------------------------------------------------------------------------------
    void initialize_cb();
    void dialogShown_cb();
    int apply_cb();
    int ok_cb();
    int update_cb(NXOpen::BlockStyler::UIBlock* block);
    PropertyList* GetBlockProperties(const char *blockID);
    
private:
    const char* theDlxFileName;
	NXOpen::BlockStyler::BlockDialog* theDialog;
	NXOpen::BlockStyler::Group* group0;// Block type: Group
	NXOpen::BlockStyler::StringBlock* string0;// Block type: String
	NXOpen::BlockStyler::StringBlock* string01;// Block type: String
	NXOpen::BlockStyler::IntegerBlock* integer0;// Block type: Integer
	NXOpen::BlockStyler::StringBlock* string02;// Block type: String
	NXOpen::BlockStyler::Button* button0;// Block type: Button
    
};
#endif //BLOCKRESVERSEEXTRUDE_H_INCLUDED
