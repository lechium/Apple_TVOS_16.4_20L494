//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MTLRenderPipelineState;

__attribute__((visibility("hidden")))
@interface ARUIRingsRenderState : NSObject
{
    id <MTLRenderPipelineState> _renderPipelineState;	// 8 = 0x8
    unsigned long long _renderArea;	// 16 = 0x10
    long long _centeredAroundPercentSegmentDrawCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001914f
@property(nonatomic) long long centeredAroundPercentSegmentDrawCount; // @synthesize centeredAroundPercentSegmentDrawCount=_centeredAroundPercentSegmentDrawCount;
@property(nonatomic) unsigned long long renderArea; // @synthesize renderArea=_renderArea;
- (_Bool)shouldRunStateForRing:(id)arg1;	// IMP=0x000000000001911f
- (void)didInitialize;	// IMP=0x000000000001910e
- (id)name;	// IMP=0x0000000000019106
- (id)initWithPipelineLibrary:(id)arg1;	// IMP=0x0000000000019032
- (id)renderPipelineDescriptorFromLibrary:(id)arg1;	// IMP=0x000000000001902a
@property(retain, nonatomic) id <MTLRenderPipelineState> renderPipelineState;
- (id)initWithDevice:(id)arg1 library:(id)arg2;	// IMP=0x0000000000018f1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
