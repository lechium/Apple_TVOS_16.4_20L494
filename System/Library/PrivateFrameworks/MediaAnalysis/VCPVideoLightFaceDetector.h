//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPFrameAnalysisStats, VCPVideoFaceMeshAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPVideoLightFaceDetector
{
    int _lastestFaceID;	// 56 = 0x38
    int _numFacesLastFrame;	// 60 = 0x3c
    VCPFrameAnalysisStats *_frameStats;	// 64 = 0x40
    VCPVideoFaceMeshAnalyzer *_meshAnalyzer;	// 72 = 0x48
    float *_lastVertices;	// 80 = 0x50
    float _lastJawOpenness;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000259e5b
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x00000000002595fe
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x00000000002588e6
- (float)minProcessTimeIntervalInSecs;	// IMP=0x00000000002588d8
- (int)detectFaces:(struct __CVBuffer *)arg1 faces:(id)arg2;	// IMP=0x000000000025827b
- (void)dealloc;	// IMP=0x00000000002581a9
- (id)initWithTransform:(struct CGAffineTransform)arg1 frameStats:(id)arg2 faceDominated:(_Bool)arg3;	// IMP=0x0000000000257fd0

@end

