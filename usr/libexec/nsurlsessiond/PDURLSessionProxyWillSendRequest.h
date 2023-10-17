//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class PDURLSessionProxyRequest, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyWillSendRequest : PBRequest
{
    PDURLSessionProxyRequest *_request;	// 8 = 0x8
    PDURLSessionProxyTaskMessage *_task;	// 16 = 0x10
    _Bool _hasBodyStream;	// 24 = 0x18
    struct {
        unsigned int hasBodyStream:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000003bffa
@property(nonatomic) _Bool hasBodyStream; // @synthesize hasBodyStream=_hasBodyStream;
@property(retain, nonatomic) PDURLSessionProxyRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003bee9
- (unsigned long long)hash;	// IMP=0x001000000003be74
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003bd73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003bcb5
- (void)copyTo:(id)arg1;	// IMP=0x001000000003bc32
- (void)writeTo:(id)arg1;	// IMP=0x001000000003bbb0
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003b912
- (id)dictionaryRepresentation;	// IMP=0x001000000003b7e0
- (id)description;	// IMP=0x001000000003b731
@property(nonatomic) _Bool hasHasBodyStream;
@property(readonly, nonatomic) _Bool hasRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end

