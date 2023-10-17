//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface ARUISpriteParticleRenderState : NSObject
{
    id <MTLRenderPipelineState> _renderPipelineState;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001dcb5
- (id)name;	// IMP=0x000000000001dca8
- (id)initWithPipelineLibrary:(id)arg1;	// IMP=0x000000000001dbe4
- (id)renderPipelineDescriptorFromLibrary:(id)arg1;	// IMP=0x000000000001daa1
@property(retain, nonatomic) id <MTLRenderPipelineState> renderPipelineState;
- (id)initWithDevice:(id)arg1 library:(id)arg2;	// IMP=0x000000000001d9b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

