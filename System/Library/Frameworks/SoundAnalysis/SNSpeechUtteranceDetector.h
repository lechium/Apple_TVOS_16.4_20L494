//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNSpeechUtteranceDetector : NSObject
{
    long long _requestType;	// 8 = 0x8
    shared_ptr_f6ac7592 _graph;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000002ee54
- (void).cxx_destruct;	// IMP=0x000000000002ee46
@property(readonly, nonatomic) void *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ec06
- (id)sharedProcessorConfiguration;	// IMP=0x000000000002ebfe
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;	// IMP=0x000000000002e912
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (id)initWithRequestType:(long long)arg1;	// IMP=0x000000000002e60c
- (id)init;	// IMP=0x000000000002e5f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
