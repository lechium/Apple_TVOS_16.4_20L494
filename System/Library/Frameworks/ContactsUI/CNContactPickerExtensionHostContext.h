//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class CNContactPickerHostViewController, NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerExtensionHostContext : NSExtensionContext
{
    CNContactPickerHostViewController *_viewController;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0010000000098998
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x001000000009897f
- (void).cxx_destruct;	// IMP=0x0000000000099094
@property(nonatomic) __weak CNContactPickerHostViewController *viewController; // @synthesize viewController=_viewController;
- (void)pickerDidCancel;	// IMP=0x0000000000098fc7
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;	// IMP=0x0000000000098eac
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;	// IMP=0x0000000000098d91
- (void)invalidateSelectionAnimated:(_Bool)arg1;	// IMP=0x0000000000098c5b
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000098ae5
- (id)_derivedExtensionAuxiliaryHostProtocol;	// IMP=0x00000000000989b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

