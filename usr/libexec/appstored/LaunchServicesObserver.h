//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface LaunchServicesObserver : NSObject
{
    NSMutableSet *_systemAppRequests;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000018926e
- (void)_handleUninstalledEventNotification:(id)arg1;	// IMP=0x0010000000189175
- (void)_handleBetaAppCrashedNotification:(id)arg1;	// IMP=0x001000000018916f
- (void)_handleAppleIDDidChangeNotification:(id)arg1;	// IMP=0x0010000000189070
- (void)_handleInstalledEventNotification:(id)arg1;	// IMP=0x0010000000188900
- (id)init;	// IMP=0x00100000001887d4

@end

