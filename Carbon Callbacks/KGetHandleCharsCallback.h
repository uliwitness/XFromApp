/*	***************************************************************************	PROJECT:	KGetHandleCharsCallback		FILE:		KGetHandleCharsCallback.h		PURPOSE:	Callback to get at the string pointer for a Handle.			COPYRIGHT:	(C) Copyright 2001 by M. Uli Kusterer, all rights reserved.					REACH ME AT:				E-MAIL:		witness@zathras.de				URL:		http://www.zathras.de			REVISIONS:		2001-02-16	UK		Created.					************************************************************************ */#pragma mark [Headers]/* --------------------------------------------------------------------------------	Headers:   ----------------------------------------------------------------------------- */   #include	"KExternalCallback.h"#pragma mark [Class Declaration]/* --------------------------------------------------------------------------------	Class declaration:   ----------------------------------------------------------------------------- */class	KGetHandleCharsCallback : public KExternalCallback{protected:	// Put your member variables here.public:			KGetHandleCharsCallback();	virtual	~KGetHandleCharsCallback();		virtual void	Run( XCmdBlockPtr theBlock );};#pragma mark [Prototypes]/* --------------------------------------------------------------------------------	Prototypes:   ----------------------------------------------------------------------------- */