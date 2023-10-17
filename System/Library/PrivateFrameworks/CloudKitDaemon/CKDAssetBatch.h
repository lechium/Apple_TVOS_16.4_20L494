//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDAssetTokenRequest, CKDAssetZone, NSArray, NSData, NSDictionary, NSMutableArray;

@interface CKDAssetBatch : NSObject
{
    _Bool _isFailed;	// 8 = 0x8
    _Bool _useMMCSEncryptionV2;	// 9 = 0x9
    NSMutableArray *_assetRecords;	// 16 = 0x10
    CKDAssetZone *_assetZone;	// 24 = 0x18
    NSData *_authPutRequest;	// 32 = 0x20
    NSData *_authPutResponse;	// 40 = 0x28
    NSDictionary *_authPutResponseHeaders;	// 48 = 0x30
    CKDAssetTokenRequest *_assetTokenRequest;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000033c8e9
@property(nonatomic) _Bool useMMCSEncryptionV2; // @synthesize useMMCSEncryptionV2=_useMMCSEncryptionV2;
@property(nonatomic) __weak CKDAssetTokenRequest *assetTokenRequest; // @synthesize assetTokenRequest=_assetTokenRequest;
@property(nonatomic) _Bool isFailed; // @synthesize isFailed=_isFailed;
@property(retain, nonatomic) NSDictionary *authPutResponseHeaders; // @synthesize authPutResponseHeaders=_authPutResponseHeaders;
@property(retain, nonatomic) NSData *authPutResponse; // @synthesize authPutResponse=_authPutResponse;
@property(retain, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property(retain, nonatomic) CKDAssetZone *assetZone; // @synthesize assetZone=_assetZone;
@property(retain, nonatomic) NSMutableArray *assetRecords; // @synthesize assetRecords=_assetRecords;
- (id)description;	// IMP=0x000000000033c805
- (id)CKPropertiesDescription;	// IMP=0x000000000033c687
- (_Bool)isEmptyOfRereferencesAssets;	// IMP=0x000000000033c5a4
- (_Bool)isEmptyOfAssets;	// IMP=0x000000000033c4c1
- (_Bool)isRereferenceAssetBatch;	// IMP=0x000000000033c3af
- (_Bool)isPackageSectionBatch;	// IMP=0x000000000033c29d
- (id)firstMMCSItemError;	// IMP=0x000000000033c14d
- (void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)arg1;	// IMP=0x000000000033bfa4
@property(readonly, nonatomic) NSArray *allRegularAndSectionAndRereferenceItems;
- (id)allMMCSAndSectionItems;	// IMP=0x000000000033bd6f
@property(readonly, nonatomic) NSArray *allMMCSSectionItems;
@property(readonly, nonatomic) NSArray *allRereferenceMMCSItems;
@property(readonly, nonatomic) NSArray *allMMCSItems;
@property(readonly) unsigned int size;
@property(readonly) unsigned int sizeUpperBound;
- (void)addAssetRecord:(id)arg1;	// IMP=0x000000000033bb7b
- (id)initWithAssetZone:(id)arg1;	// IMP=0x000000000033baf6

@end

