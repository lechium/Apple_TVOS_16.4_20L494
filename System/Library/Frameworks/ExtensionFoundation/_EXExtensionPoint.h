//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _EXExtensionPoint : NSObject
{
    unsigned int _platform;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSDictionary *_SDKDictionary;	// 24 = 0x18
    unsigned long long _variant;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003b3d3
@property(retain) NSURL *url; // @synthesize url=_url;
@property unsigned long long variant; // @synthesize variant=_variant;
@property unsigned int platform; // @synthesize platform=_platform;
@property(retain) NSDictionary *SDKDictionary; // @synthesize SDKDictionary=_SDKDictionary;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (void)reset;	// IMP=0x000000000003b2c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b208

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

