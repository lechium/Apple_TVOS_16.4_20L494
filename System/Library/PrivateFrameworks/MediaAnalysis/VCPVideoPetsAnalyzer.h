//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, VCPImagePetsAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPVideoPetsAnalyzer
{
    NSMutableArray *_petsDetections;	// 8 = 0x8
    NSMutableArray *_petsFaceDetections;	// 16 = 0x10
    CDStruct_1b6d18a9 _timeLastProcess;	// 24 = 0x18
    CDStruct_1b6d18a9 _petsStart;	// 48 = 0x30
    CDStruct_1b6d18a9 _petsFaceStart;	// 72 = 0x48
    VCPImagePetsAnalyzer *_petsAnalyer;	// 96 = 0x60
    NSArray *_petsActiveRegions;	// 104 = 0x68
    NSArray *_petsFaceActiveRegions;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000004983
- (id)results;	// IMP=0x0000000000004890
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000004700
- (void)addDetectionToDict:(CDStruct_e83c9415)arg1 withActiveRegions:(id)arg2 forPetsDetections:(id)arg3 fromTime:(CDStruct_1b6d18a9)arg4;	// IMP=0x00000000000041d2
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x00000000000041bd
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4 frameStats:(id)arg5;	// IMP=0x0000000000003eb2
- (id)parseResults:(id)arg1 toDetections:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 fromTime:(CDStruct_1b6d18a9 *)arg4 addActiveRegions:(id)arg5;	// IMP=0x000000000000353a
- (id)initWithTransform:(struct CGAffineTransform)arg1;	// IMP=0x0000000000003375

@end

