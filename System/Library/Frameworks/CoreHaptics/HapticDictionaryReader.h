//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HapticDictionaryReader : NSObject
{
    unsigned long long _urlIndex;	// 8 = 0x8
}

- (id)parseParamCurveControlPoints:(id)arg1;	// IMP=0x000000000001cd4d
- (id)parseParamCurve:(id)arg1;	// IMP=0x000000000001c843
- (id)parseParam:(id)arg1;	// IMP=0x000000000001c34c
- (id)parseEventParams:(id)arg1;	// IMP=0x000000000001bec6
- (id)parseEvent:(id)arg1 withBaseURL:(id)arg2;	// IMP=0x000000000001b3b3
- (_Bool)parseEventsAndParameters:(id)arg1 withBaseURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a9d5
- (id)scanForEmbeddedResources:(id)arg1;	// IMP=0x000000000001a380
- (id)parseConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019bdc
- (id)readAndVerifyVersion:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019831

@end

