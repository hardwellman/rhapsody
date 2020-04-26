/*********************************************************************
	Rhapsody	: 8.4 
	Login		: raxma
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: ButtonAdd
//!	Generated Date	: Wed, 4, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\ButtonAdd.h
*********************************************************************/

#ifndef ButtonAdd_H
#define ButtonAdd_H

//## auto_generated
#include <oxf\oxf.h>
//## link itsDBGrid
class DBGrid;

//## link itsForm3Add
class Form3Add;

//## package Default

//## class ButtonAdd
class ButtonAdd {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ButtonAdd();
    
    //## auto_generated
    ~ButtonAdd();
    
    ////    Operations    ////
    
    //## operation Add()
    void Add();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAdd() const;
    
    //## auto_generated
    void setAdd(int p_Add);
    
    //## auto_generated
    DBGrid* getItsDBGrid() const;
    
    //## auto_generated
    void setItsDBGrid(DBGrid* p_DBGrid);
    
    //## auto_generated
    Form3Add* getItsForm3Add() const;
    
    //## auto_generated
    void setItsForm3Add(Form3Add* p_Form3Add);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int Add;		//## attribute Add
    
    ////    Relations and components    ////
    
    DBGrid* itsDBGrid;		//## link itsDBGrid
    
    Form3Add* itsForm3Add;		//## link itsForm3Add
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDBGrid(DBGrid* p_DBGrid);
    
    //## auto_generated
    void _setItsDBGrid(DBGrid* p_DBGrid);
    
    //## auto_generated
    void _clearItsDBGrid();
    
    //## auto_generated
    void __setItsForm3Add(Form3Add* p_Form3Add);
    
    //## auto_generated
    void _setItsForm3Add(Form3Add* p_Form3Add);
    
    //## auto_generated
    void _clearItsForm3Add();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\ButtonAdd.h
*********************************************************************/
