//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/VCPMABaseTask.h>

@class NSArray, NSURL;

@interface VCPPhotosFaceIdentificationTask : VCPMABaseTask
{
    NSArray *_faceLocalIdentifiers;	// 8 = 0x8
    NSURL *_photoLibraryURL;	// 16 = 0x10
}

+ (id)taskWithFaceLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00400000000a46ea
- (void).cxx_destruct;	// IMP=0x00200000000a644a
- (_Bool)run:(id *)arg1;	// IMP=0x00100000000a55d0
- (void)_classifyPet:(id)arg1 usingModel:(id)arg2 withResults:(id *)arg3;	// IMP=0x00100000000a4e9c
- (void)_classifyPerson:(id)arg1 usingModel:(id)arg2 withResults:(id *)arg3;	// IMP=0x00100000000a477d
- (id)initWithFaceLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a4640

@end

