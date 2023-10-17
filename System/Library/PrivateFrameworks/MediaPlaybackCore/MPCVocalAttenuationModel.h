//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPCVocalAttenuationModel : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSArray *_files;	// 16 = 0x10
    NSString *_basePath;	// 24 = 0x18
    NSString *_plistPath;	// 32 = 0x20
    unsigned long long _blockSize;	// 40 = 0x28
    unsigned long long _batchSize;	// 48 = 0x30
    unsigned long long _sampleRate;	// 56 = 0x38
    unsigned long long _lookaheadSize;	// 64 = 0x40
    unsigned long long _taskIteration;	// 72 = 0x48
    double _processingDelay;	// 80 = 0x50
}

+ (id)_filePathsForModelAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000236d2c
+ (id)_plistForModelAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000236a1c
- (void).cxx_destruct;	// IMP=0x00000000002369de
@property(nonatomic) double processingDelay; // @synthesize processingDelay=_processingDelay;
@property(nonatomic) unsigned long long taskIteration; // @synthesize taskIteration=_taskIteration;
@property(nonatomic) unsigned long long lookaheadSize; // @synthesize lookaheadSize=_lookaheadSize;
@property(nonatomic) unsigned long long sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) unsigned long long blockSize; // @synthesize blockSize=_blockSize;
@property(copy, nonatomic) NSString *plistPath; // @synthesize plistPath=_plistPath;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(copy, nonatomic) NSArray *files; // @synthesize files=_files;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000236555

@end

