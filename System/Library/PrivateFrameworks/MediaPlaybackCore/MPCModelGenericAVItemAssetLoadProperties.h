//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCAudioAssetTypeSelection, MPIdentifierSet, MPModelFileAsset, MPModelGenericObject, MPModelHomeSharingAsset, MPModelStoreAsset, NSString;
@protocol MPCModelPlaybackAssetCacheProviding;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemAssetLoadProperties : NSObject
{
    _Bool _prefersVideoContent;	// 8 = 0x8
    _Bool _prefersHighQualityContent;	// 9 = 0x9
    _Bool _radioPlayback;	// 10 = 0xa
    _Bool _followUp;	// 11 = 0xb
    _Bool _supportsVocalAttenuation;	// 12 = 0xc
    long long _HLSContentPolicy;	// 16 = 0x10
    NSString *_assetSourceStorefrontID;	// 24 = 0x18
    id <MPCModelPlaybackAssetCacheProviding> _assetCacheProvider;	// 32 = 0x20
    MPModelFileAsset *_fileAsset;	// 40 = 0x28
    MPModelGenericObject *_genericObject;	// 48 = 0x30
    MPModelHomeSharingAsset *_homeSharingAsset;	// 56 = 0x38
    MPIdentifierSet *_itemIdentifiers;	// 64 = 0x40
    MPModelStoreAsset *_storeAsset;	// 72 = 0x48
    unsigned long long _accountID;	// 80 = 0x50
    unsigned long long _delegatedAccountID;	// 88 = 0x58
    NSString *_householdID;	// 96 = 0x60
    NSString *_storefrontID;	// 104 = 0x68
    NSString *_playbackAuthorizationToken;	// 112 = 0x70
    long long _preferredAudioAssetType;	// 120 = 0x78
    MPCAudioAssetTypeSelection *_audioAssetTypeSelection;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000022bdad
@property(nonatomic) _Bool supportsVocalAttenuation; // @synthesize supportsVocalAttenuation=_supportsVocalAttenuation;
@property(retain, nonatomic) MPCAudioAssetTypeSelection *audioAssetTypeSelection; // @synthesize audioAssetTypeSelection=_audioAssetTypeSelection;
@property(nonatomic) long long preferredAudioAssetType; // @synthesize preferredAudioAssetType=_preferredAudioAssetType;
@property(copy, nonatomic) NSString *playbackAuthorizationToken; // @synthesize playbackAuthorizationToken=_playbackAuthorizationToken;
@property(copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(copy, nonatomic) NSString *householdID; // @synthesize householdID=_householdID;
@property(nonatomic) unsigned long long delegatedAccountID; // @synthesize delegatedAccountID=_delegatedAccountID;
@property(nonatomic) unsigned long long accountID; // @synthesize accountID=_accountID;
@property(nonatomic, getter=isFollowUp) _Bool followUp; // @synthesize followUp=_followUp;
@property(retain, nonatomic) MPModelStoreAsset *storeAsset; // @synthesize storeAsset=_storeAsset;
@property(nonatomic, getter=isRadioPlayback) _Bool radioPlayback; // @synthesize radioPlayback=_radioPlayback;
@property(nonatomic) _Bool prefersHighQualityContent; // @synthesize prefersHighQualityContent=_prefersHighQualityContent;
@property(retain, nonatomic) MPIdentifierSet *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(retain, nonatomic) MPModelHomeSharingAsset *homeSharingAsset; // @synthesize homeSharingAsset=_homeSharingAsset;
@property(retain, nonatomic) MPModelGenericObject *genericObject; // @synthesize genericObject=_genericObject;
@property(retain, nonatomic) MPModelFileAsset *fileAsset; // @synthesize fileAsset=_fileAsset;
@property(retain, nonatomic) id <MPCModelPlaybackAssetCacheProviding> assetCacheProvider; // @synthesize assetCacheProvider=_assetCacheProvider;
@property(nonatomic) _Bool prefersVideoContent; // @synthesize prefersVideoContent=_prefersVideoContent;
@property(copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
@property(nonatomic) long long HLSContentPolicy; // @synthesize HLSContentPolicy=_HLSContentPolicy;
@property(readonly, nonatomic) _Bool allowsHLSContent;

@end

