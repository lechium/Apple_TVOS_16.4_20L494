//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CKAppLaunchMonitor : NSObject
{
    NSString *_foregroundAppBundleId;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000000206c
- (void).cxx_destruct;	// IMP=0x002000000000205c
@property(retain, nonatomic) NSString *foregroundAppBundleId; // @synthesize foregroundAppBundleId=_foregroundAppBundleId;
- (void)stopListening;	// IMP=0x0010000000001fba
- (void)startListening;	// IMP=0x0010000000001f33
- (void)dealloc;	// IMP=0x0010000000001ef5
- (id)init;	// IMP=0x0010000000001ea7

@end
