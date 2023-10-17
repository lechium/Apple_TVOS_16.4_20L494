//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL;

@interface DirectUploadRequest : NSObject
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    long long _databaseIdentifier;	// 16 = 0x10
    NSURL *_localAssetURL;	// 24 = 0x18
    NSString *_parentRelationshipType;	// 32 = 0x20
    long long _parentUploadIdentifier;	// 40 = 0x28
    NSString *_sourceApplication;	// 48 = 0x30
    NSString *_uti;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000018f0c7
@property(copy, nonatomic) NSString *UTI; // @synthesize UTI=_uti;
@property(copy, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(nonatomic) long long parentUploadIdentifier; // @synthesize parentUploadIdentifier=_parentUploadIdentifier;
@property(copy, nonatomic) NSString *parentRelationshipType; // @synthesize parentRelationshipType=_parentRelationshipType;
@property(copy, nonatomic) NSURL *localAssetURL; // @synthesize localAssetURL=_localAssetURL;
@property(nonatomic) long long databaseIdentifier; // @synthesize databaseIdentifier=_databaseIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018ef61
- (id)initWithEntity:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x001000000018ec93

@end

