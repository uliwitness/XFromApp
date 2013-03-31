/* =============================================================================	PROJECT:	KGetFieldByNumCallback		FILE:		KGetFieldByNumCallback.h		PURPOSE:	Callback to retrieve the text of a text field.			COPYRIGHT:	(C) Copyright 2001 by M. Uli Kusterer, all rights reserved.					REACH ME AT:				E-MAIL:		witness@weblayout.com				URL:		http://www.weblayout.com/witness			REVISIONS:		2001-07-13	UK		Created.				   ========================================================================== */#pragma mark [Headers]/* --------------------------------------------------------------------------------	Headers:   ----------------------------------------------------------------------------- */   #include	"KExternalCallback.h"#pragma mark [Class Declaration]/* --------------------------------------------------------------------------------	Class declaration:   ----------------------------------------------------------------------------- */class	KGetFieldByNumCallback : public KExternalCallback{protected:	// Put your member variables here.public:			KGetFieldByNumCallback();	virtual	~KGetFieldByNumCallback();		virtual void	Run( XCmdBlockPtr theBlock );	virtual Handle	GetFieldByNum( long fieldNum, bool isCardFld ) { return NULL; };};#pragma mark [Prototypes]/* --------------------------------------------------------------------------------	Prototypes:   ----------------------------------------------------------------------------- */