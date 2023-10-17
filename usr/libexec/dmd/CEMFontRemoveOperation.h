//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATOperation.h>

@class CEMFontAssetInstallMetadata, CEMFontDeclaration;

@interface CEMFontRemoveOperation : CATOperation
{
    CEMFontDeclaration *_fontDeclaration;	// 8 = 0x8
    CEMFontAssetInstallMetadata *_installMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000005c0f
@property(retain, nonatomic) CEMFontAssetInstallMetadata *installMetadata; // @synthesize installMetadata=_installMetadata;
@property(retain, nonatomic) CEMFontDeclaration *fontDeclaration; // @synthesize fontDeclaration=_fontDeclaration;
- (void)main;	// IMP=0x0010000000005a9c
- (id)initWithFontDeclaration:(id)arg1 installMetadata:(id)arg2;	// IMP=0x00100000000059fa

@end
