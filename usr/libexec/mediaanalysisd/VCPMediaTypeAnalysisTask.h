//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VCPMediaTypeAnalysisTask
{
    long long _type;	// 8 = 0x8
}

+ (id)taskWithPhotoLibrary:(id)arg1 mediaType:(long long)arg2;	// IMP=0x00400000000a1e37
- (int)mainInternal;	// IMP=0x00200000000a2465
- (int)_processFetchedAssets:(id)arg1 withProgressReport:(id)arg2 andChangeManager:(id)arg3;	// IMP=0x00100000000a1f52
- (_Bool)_canDoFullAnalysis:(id)arg1;	// IMP=0x00100000000a1eab
- (id)initWithPhotoLibrary:(id)arg1 mediaType:(long long)arg2;	// IMP=0x00100000000a1df3
- (id)init;	// IMP=0x00100000000a1de5

@end

