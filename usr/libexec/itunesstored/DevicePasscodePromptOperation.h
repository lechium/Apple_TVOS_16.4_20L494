//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class ISDialog, NSObject, NSString;
@protocol OS_dispatch_semaphore;

@interface DevicePasscodePromptOperation : ISOperation
{
    ISDialog *_dialog;	// 96 = 0x60
    CDUnknownBlockType _tokenBlock;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_passcodeEntrySemaphore;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000010f326
- (long long)_keyboardType;	// IMP=0x001000000010f2c7
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x001000000010f2b2
- (void)run;	// IMP=0x001000000010f210
@property(copy) CDUnknownBlockType tokenBlock;
- (id)initWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x001000000010ee1a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

