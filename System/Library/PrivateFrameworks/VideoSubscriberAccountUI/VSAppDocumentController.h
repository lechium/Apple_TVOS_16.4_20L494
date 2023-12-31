//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppDocument, IKViewElement, NSError, NSString, VSViewModel;
@protocol VSAppDocumentControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAppDocumentController : NSObject
{
    IKAppDocument *_appDocument;	// 8 = 0x8
    id <VSAppDocumentControllerDelegate> _delegate;	// 16 = 0x10
    VSViewModel *_viewModel;	// 24 = 0x18
    NSError *_viewModelError;	// 32 = 0x20
    IKViewElement *_templateElement;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000381d9
@property(retain, nonatomic) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
@property(retain, nonatomic) NSError *viewModelError; // @synthesize viewModelError=_viewModelError;
@property(retain, nonatomic) VSViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAppDocumentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IKAppDocument *appDocument; // @synthesize appDocument=_appDocument;
- (void)userInterfaceStyleDidUpdate;	// IMP=0x0000000000037e04
- (void)_notiftyDidFailToUpdateViewModelWithError:(id)arg1;	// IMP=0x0000000000037d8a
- (void)_notiftyDidUpdateViewModel:(id)arg1;	// IMP=0x0000000000037d10
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000378a4
- (id)_imageItemProviderWithImageElement:(id)arg1;	// IMP=0x0000000000037837
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x00000000000377be
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x0000000000037739
- (_Bool)_updateViewModel:(id)arg1 WithError:(id *)arg2;	// IMP=0x0000000000037731
- (id)_newViewModel;	// IMP=0x0000000000037720
- (_Bool)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;	// IMP=0x0000000000037640
- (void)documentDidUpdate:(id)arg1;	// IMP=0x000000000003743e
- (void)documentNeedsUpdate:(id)arg1;	// IMP=0x0000000000037399
- (void)dealloc;	// IMP=0x0000000000037323
- (id)initWithAppDocument:(id)arg1;	// IMP=0x00000000000371cf
- (id)init;	// IMP=0x0000000000037160

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

