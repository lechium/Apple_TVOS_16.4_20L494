//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, CEMImageDeclaration, NSString;
@protocol DMDRemoteAssetResolver;

@interface CEMImageInstallOperation : CATOperation
{
    CEMImageDeclaration *_imageDeclaration;	// 8 = 0x8
    id <DMDRemoteAssetResolver> _resolver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000064d7
@property(retain, nonatomic) id <DMDRemoteAssetResolver> resolver; // @synthesize resolver=_resolver;
@property(retain, nonatomic) CEMImageDeclaration *imageDeclaration; // @synthesize imageDeclaration=_imageDeclaration;
- (void)assetResolutionFailedWithError:(id)arg1;	// IMP=0x0010000000006443
- (void)assetResolutionDidSucceedWithAssetURL:(id)arg1;	// IMP=0x001000000000613d
@property(readonly, copy, nonatomic) CEMAssetBaseReference *assetReference;
@property(readonly, copy, nonatomic) CEMAssetBaseDescriptor *assetDescriptor;
@property(readonly, copy, nonatomic) NSString *assetIdentifier;
- (void)main;	// IMP=0x0010000000005f78
- (_Bool)isAsynchronous;	// IMP=0x0010000000005f70
- (id)initWithImageDeclaration:(id)arg1 resolver:(id)arg2;	// IMP=0x0010000000005ece

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

