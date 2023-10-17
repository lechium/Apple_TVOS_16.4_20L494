//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class CNContactViewHostViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactViewExtensionHostContext : NSExtensionContext
{
    CNContactViewHostViewController *_viewController;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00100000000581cb
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00100000000581b2
- (void).cxx_destruct;	// IMP=0x00000000000589c7
@property(nonatomic) __weak CNContactViewHostViewController *viewController; // @synthesize viewController=_viewController;
- (void)asyncShouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x000000000005880f
- (void)isPresentingFullscreen:(_Bool)arg1;	// IMP=0x0000000000058753
- (void)didDeleteContact:(id)arg1;	// IMP=0x0000000000058665
- (void)didCompleteWithContact:(id)arg1;	// IMP=0x0000000000058577
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;	// IMP=0x0000000000058470
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x0000000000058449
- (void)toggleEditing;	// IMP=0x000000000005840c
- (void)editCancel;	// IMP=0x00000000000583cf
- (void)didChangeToEditMode:(_Bool)arg1;	// IMP=0x0000000000058383
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000582fd
- (id)protocolService;	// IMP=0x00000000000581e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
