//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol NSSecureCoding;

@interface CKDPCSData : NSObject
{
    struct _OpaquePCSShareProtection *_pcs;	// 8 = 0x8
    NSString *_etag;	// 16 = 0x10
    NSData *_pcsData;	// 24 = 0x18
    NSString *_pcsKeyID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000321ec1
- (void).cxx_destruct;	// IMP=0x000000000032215f
@property(retain, nonatomic) NSString *pcsKeyID; // @synthesize pcsKeyID=_pcsKeyID;
@property(copy, nonatomic) NSData *pcsData; // @synthesize pcsData=_pcsData;
@property(copy, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000321ff0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000321ec9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000321d6b
- (id)description;	// IMP=0x0000000000321d59
- (id)CKPropertiesDescription;	// IMP=0x0000000000321c07
@property(readonly, nonatomic) id <NSSecureCoding> itemID;
@property(nonatomic) struct _OpaquePCSShareProtection *pcs; // @synthesize pcs=_pcs;
- (_Bool)shouldEncodePCSData;	// IMP=0x0000000000321b03
- (void)dealloc;	// IMP=0x0000000000321abc
- (id)initWithPCSData:(id)arg1;	// IMP=0x0000000000321a49

@end

