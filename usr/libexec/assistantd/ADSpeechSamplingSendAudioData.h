//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface ADSpeechSamplingSendAudioData : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSArray *_audioDataFolders;	// 16 = 0x10
    long long _samplingType;	// 24 = 0x18
    NSString *_samplingComponent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001d5b2a
@property(copy, nonatomic) NSString *samplingComponent; // @synthesize samplingComponent=_samplingComponent;
@property(nonatomic) long long samplingType; // @synthesize samplingType=_samplingType;
@property(copy, nonatomic) NSArray *audioDataFolders; // @synthesize audioDataFolders=_audioDataFolders;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)convertToALACWithPath:(id)arg1 withSamplingRateOf:(int)arg2;	// IMP=0x00100000001d5488
- (id)makeValidWAVFile:(id)arg1 withSamplingRateOf:(int)arg2;	// IMP=0x00100000001d5115
- (void)enqueueAudioDataWithAudioFileName:(id)arg1 audioMetadataDict:(id)arg2 folderPath:(id)arg3;	// IMP=0x00100000001d4574
- (void)sendAudioDataToServer;	// IMP=0x00100000001d3cda
- (void)dealloc;	// IMP=0x00100000001d3c16
- (id)initWithAudioDataFolders:(id)arg1 samplingType:(long long)arg2;	// IMP=0x00100000001d3a93

@end

