//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

@interface ASCLockupBatchRequest : NSObject
{
    NSSet *_ids;	// 8 = 0x8
    NSString *_kind;	// 16 = 0x10
    NSString *_context;	// 24 = 0x18
    NSString *_clientID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000010957
+ (id)lockupBatchRequestsFromRequests:(id)arg1;	// IMP=0x001000000001017c
- (void).cxx_destruct;	// IMP=0x00200000000115f6
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(readonly, copy, nonatomic) NSSet *ids; // @synthesize ids=_ids;
- (id)lockupBatchRequestWithIDs:(id)arg1;	// IMP=0x00100000000114ef
@property(readonly, copy, nonatomic) NSArray *requests;
- (id)description;	// IMP=0x00100000000110c0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000010db7
- (unsigned long long)hash;	// IMP=0x0010000000010ca1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000010c96
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000010b7e
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001095f
- (id)_initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3 clientID:(id)arg4;	// IMP=0x00100000000108e1
- (id)initWithIDs:(id)arg1 kind:(id)arg2 context:(id)arg3;	// IMP=0x00100000000107fb

@end
