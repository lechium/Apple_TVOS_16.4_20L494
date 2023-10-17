//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class MPAVItem, MPCPlayerItemConfigurator, NSError, NSObject;
@protocol MPCAssetLoaderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCAssetLoadingOperation : NSOperation
{
    _Bool _isExecuting;	// 8 = 0x8
    _Bool _isFinished;	// 9 = 0x9
    MPAVItem *_item;	// 16 = 0x10
    id <MPCAssetLoaderDelegate> _delegate;	// 24 = 0x18
    MPCPlayerItemConfigurator *_configurator;	// 32 = 0x20
    long long _token;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002077b8
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) long long token; // @synthesize token=_token;
@property(retain, nonatomic) MPCPlayerItemConfigurator *configurator; // @synthesize configurator=_configurator;
@property(nonatomic) __weak id <MPCAssetLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) MPAVItem *item; // @synthesize item=_item;
- (_Bool)_configureItem:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020725f
- (void)main;	// IMP=0x0000000000206a66
- (_Bool)isFinished;	// IMP=0x0000000000206a56
- (_Bool)isExecuting;	// IMP=0x0000000000206a46
- (void)start;	// IMP=0x0000000000206838
- (id)initWithPlayerItem:(id)arg1 configurator:(id)arg2 delegate:(id)arg3 token:(long long)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000206676

@end

