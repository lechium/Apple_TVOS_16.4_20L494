//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPSaliencyRegion : NSObject
{
    float _confidence;	// 8 = 0x8
    struct CGRect _bound;	// 16 = 0x10
}

+ (id)salientRegionsFromPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x0060000000089f4d
+ (void)attachSalientRegions:(id)arg1 toPixelBuffer:(struct __CVBuffer *)arg2;	// IMP=0x0060000000089eec
@property float confidence; // @synthesize confidence=_confidence;
@property struct CGRect bound; // @synthesize bound=_bound;
- (id)plistRepresentation;	// IMP=0x0000000000089de0
- (id)initWithPlistRepresentation:(id)arg1;	// IMP=0x0000000000089caa
- (id)initWith:(struct CGRect)arg1 confidence:(float)arg2;	// IMP=0x0000000000089c54

@end

