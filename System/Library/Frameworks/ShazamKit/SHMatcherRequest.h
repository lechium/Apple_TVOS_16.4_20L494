//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID, SHSignature;

__attribute__((visibility("hidden")))
@interface SHMatcherRequest : NSObject
{
    _Bool _sendNotifications;	// 8 = 0x8
    NSString *_installationID;	// 16 = 0x10
    NSUUID *_requestID;	// 24 = 0x18
    SHSignature *_signature;	// 32 = 0x20
    NSDate *_deadline;	// 40 = 0x28
    long long _stopCondition;	// 48 = 0x30
    long long _type;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000c91c
+ (id)requestUntilMatchWithNotifications:(_Bool)arg1;	// IMP=0x001000000000c8d5
+ (id)requestOnceWithNotifications:(_Bool)arg1;	// IMP=0x001000000000c891
+ (id)requestToMatchUntilDeadline:(id)arg1 sendNotifications:(_Bool)arg2;	// IMP=0x001000000000c825
+ (id)requestToMatchSignature:(id)arg1 installationID:(id)arg2 sendNotifications:(_Bool)arg3;	// IMP=0x001000000000c79a
+ (id)requestSignatureGenerationUntilDeadline:(id)arg1;	// IMP=0x001000000000c732
+ (id)requestSignatureGenerationOnce;	// IMP=0x001000000000c6ef
- (void).cxx_destruct;	// IMP=0x000000000000ce23
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long stopCondition; // @synthesize stopCondition=_stopCondition;
@property(readonly, nonatomic) _Bool sendNotifications; // @synthesize sendNotifications=_sendNotifications;
@property(readonly, nonatomic) NSDate *deadline; // @synthesize deadline=_deadline;
@property(readonly, nonatomic) SHSignature *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSUUID *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) _Bool hasHitDeadline;
@property(readonly, copy, nonatomic) NSString *installationID; // @synthesize installationID=_installationID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000cc15
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ca89
- (id)initWithSignature:(id)arg1 deadline:(id)arg2 installationID:(id)arg3 sendNotifications:(_Bool)arg4 stopCondition:(long long)arg5 requestType:(long long)arg6;	// IMP=0x000000000000ca04
- (id)initWithSignature:(id)arg1 deadline:(id)arg2 sendNotifications:(_Bool)arg3 stopCondition:(long long)arg4 requestType:(long long)arg5;	// IMP=0x000000000000c924

@end

