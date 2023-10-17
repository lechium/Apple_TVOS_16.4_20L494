//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, NSURL, RequestLocalizations;

@interface Request : NSObject
{
    _Bool _mocked;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSString *_uniqueIdentifier;	// 24 = 0x18
    NSString *_requestIdentifier;	// 32 = 0x20
    NSString *_itemBundleIdentifier;	// 40 = 0x28
    NSString *_itemIdentifier;	// 48 = 0x30
    RequestLocalizations *_localizations;	// 56 = 0x38
    NSString *_offerName;	// 64 = 0x40
    NSURL *_previewURL;	// 72 = 0x48
    NSString *_productType;	// 80 = 0x50
    NSString *_productTypeName;	// 88 = 0x58
    NSURL *_productURL;	// 96 = 0x60
    NSDictionary *_requestInfo;	// 104 = 0x68
    long long _status;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000267ac
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSDictionary *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(readonly, nonatomic) NSURL *productURL; // @synthesize productURL=_productURL;
@property(readonly, nonatomic) NSString *productTypeName; // @synthesize productTypeName=_productTypeName;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, nonatomic) NSString *offerName; // @synthesize offerName=_offerName;
@property(readonly, nonatomic, getter=isMocked) _Bool mocked; // @synthesize mocked=_mocked;
@property(readonly, nonatomic) RequestLocalizations *localizations; // @synthesize localizations=_localizations;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSString *itemBundleIdentifier; // @synthesize itemBundleIdentifier=_itemBundleIdentifier;
@property(readonly, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy) NSString *description;
- (id)compile;	// IMP=0x00100000000262ec
- (id)initWithDictionary:(id)arg1;	// IMP=0x0010000000025bb1
- (id)initWithDate:(id)arg1 requestIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 itemBundleIdentifier:(id)arg4 itemIdentifier:(id)arg5 localizations:(id)arg6 mocked:(_Bool)arg7 offerName:(id)arg8 previewURL:(id)arg9 productType:(id)arg10 productTypeName:(id)arg11 productURL:(id)arg12 requestInfo:(id)arg13 status:(long long)arg14;	// IMP=0x00100000000259a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

