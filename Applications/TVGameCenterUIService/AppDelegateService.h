//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindow;

@interface AppDelegateService : NSObject
{
}

- (void)setLocalPlayer:(id)arg1;	// IMP=0x00200000000018a6
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0010000000001858
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000001850
- (id)init;	// IMP=0x00100000000017c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

