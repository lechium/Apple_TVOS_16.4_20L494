//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UAPBIRFileURLConverter : NSObject
{
}

+ (void)registerConverter;	// IMP=0x0010000000042a6a
- (id)convertIRDataToPlatform:(id)arg1;	// IMP=0x0000000000042ad9
- (id)convertPlatformDataToIR:(id)arg1;	// IMP=0x0000000000042ad1
- (id)typeString;	// IMP=0x0000000000042ac4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

