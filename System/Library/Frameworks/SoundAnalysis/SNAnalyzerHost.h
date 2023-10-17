//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SNAnalyzing, SNTimeConverting;

__attribute__((visibility("hidden")))
@interface SNAnalyzerHost : NSObject
{
    id <SNAnalyzing> _analyzer;	// 8 = 0x8
    id <SNTimeConverting> _timeConverter;	// 16 = 0x10
    CDUnknownBlockType _resultsHandler;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    long long _requestState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002f3c0
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ef94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

