//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IPOSXABNamePreferenceInfoProvider : NSObject
{
}

+ (id)canonicalKeyToValueIdentifierToNumericValueMap;	// IMP=0x001000000000be96
+ (id)valueToValueIdentifierMapFromCanonicalKey:(id)arg1;	// IMP=0x001000000000bdf4
+ (id)valueIdentifierToValueMapFromCanonicalKey:(id)arg1;	// IMP=0x001000000000bd71
+ (id)canonicalNameToNativeKeyName;	// IMP=0x001000000000bcae
+ (id)nativeKeyNameToCanonicalKeyName;	// IMP=0x001000000000bbcf
+ (id)domain;	// IMP=0x001000000000bbc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
