//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface VNDetectBarcodesRequestConfiguration
{
    _Bool _stopAtFirstPyramidWith2DCode;	// 8 = 0x8
    _Bool _useMLDetector;	// 9 = 0x9
    NSArray *_symbologies;	// 16 = 0x10
    NSString *_locateMode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010da23
@property(nonatomic) _Bool useMLDetector; // @synthesize useMLDetector=_useMLDetector;
@property(nonatomic) _Bool stopAtFirstPyramidWith2DCode; // @synthesize stopAtFirstPyramidWith2DCode=_stopAtFirstPyramidWith2DCode;
@property(copy, nonatomic) NSString *locateMode; // @synthesize locateMode=_locateMode;
@property(copy, nonatomic) NSArray *symbologies; // @synthesize symbologies=_symbologies;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010d8dd
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x000000000010d84b
- (void)setDefaultSymbologiesForRevision:(unsigned long long)arg1;	// IMP=0x000000000010d760

@end

