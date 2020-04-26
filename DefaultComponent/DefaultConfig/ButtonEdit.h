/*********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonEdit
//!	Generated Date	: Wed, 4, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonEdit.h
*********************************************************************/

#ifndef ButtonEdit_H
#define ButtonEdit_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsDBGrid
class DBGrid;

//## link itsForm4Edit
class Form4Edit;

//## package Default

//## class ButtonEdit
class ButtonEdit {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ButtonEdit();
    
    //## auto_generated
    ~ButtonEdit();
    
    ////    Operations    ////
    
    //## operation Change()
    void Change();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getChange() const;
    
    //## auto_generated
    void setChange(int p_Change);
    
    //## auto_generated
    DBGrid* getItsDBGrid() const;
    
    //## auto_generated
    void setItsDBGrid(DBGrid* p_DBGrid);
    
    //## auto_generated
    Form4Edit* getItsForm4Edit() const;
    
    //## auto_generated
    void setItsForm4Edit(Form4Edit* p_Form4Edit);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Change;		//## attribute Change
    
    ////    Relations and components    ////
    
    DBGrid* itsDBGrid;		//## link itsDBGrid
    
    Form4Edit* itsForm4Edit;		//## link itsForm4Edit
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDBGrid(DBGrid* p_DBGrid);
    
    //## auto_generated
    void _setItsDBGrid(DBGrid* p_DBGrid);
    
    //## auto_generated
    void _clearItsDBGrid();
    
    //## auto_generated
    void __setItsForm4Edit(Form4Edit* p_Form4Edit);
    
    //## auto_generated
    void _setItsForm4Edit(Form4Edit* p_Form4Edit);
    
    //## auto_generated
    void _clearItsForm4Edit();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonEdit.h
*********************************************************************/
