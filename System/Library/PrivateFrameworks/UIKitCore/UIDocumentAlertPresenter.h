//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, UIAlertView;

__attribute__((visibility("hidden")))
@interface UIDocumentAlertPresenter : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    UIAlertView *_alert;	// 24 = 0x18
}

+ (id)_presentAlertWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000057a8b6
- (void).cxx_destruct;	// IMP=0x000000000057abdc
- (void)alertViewCancel:(id)arg1;	// IMP=0x000000000057abc4
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x000000000057ab38
- (void)_forceFinishNow;	// IMP=0x000000000057ab01
- (void)dealloc;	// IMP=0x000000000057a872
- (id)initWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000057a7c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
