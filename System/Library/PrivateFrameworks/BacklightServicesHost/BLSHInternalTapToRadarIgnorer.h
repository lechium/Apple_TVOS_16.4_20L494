//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BLSHInternalTapToRadarIgnorer : NSObject
{
}

+ (void)resetIgnoredDesignations;	// IMP=0x008000000000f414
+ (_Bool)hasIgnoredDesignations;	// IMP=0x008000000000f3cc
+ (_Bool)shouldIgnoreDesignation:(unsigned long long)arg1;	// IMP=0x008000000000f32e
+ (void)ignoreRadarDesignation:(unsigned long long)arg1;	// IMP=0x008000000000f232
+ (id)_ignoredDesignations;	// IMP=0x008000000000f1b7
+ (id)_defaults;	// IMP=0x008000000000f146

@end
