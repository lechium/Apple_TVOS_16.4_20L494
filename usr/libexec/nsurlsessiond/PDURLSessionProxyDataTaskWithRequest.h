//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class PDURLSessionProxyRequest, PDURLSessionProxyTaskMessage;

@interface PDURLSessionProxyDataTaskWithRequest : PBRequest
{
    unsigned long long _taskSequenceNumber;	// 8 = 0x8
    PDURLSessionProxyRequest *_currentRequest;	// 16 = 0x10
    PDURLSessionProxyRequest *_originalRequest;	// 24 = 0x18
    PDURLSessionProxyTaskMessage *_task;	// 32 = 0x20
    struct {
        unsigned int taskSequenceNumber:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000007995
@property(nonatomic) unsigned long long taskSequenceNumber; // @synthesize taskSequenceNumber=_taskSequenceNumber;
@property(retain, nonatomic) PDURLSessionProxyRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(retain, nonatomic) PDURLSessionProxyRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
@property(retain, nonatomic) PDURLSessionProxyTaskMessage *task; // @synthesize task=_task;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000007823
- (unsigned long long)hash;	// IMP=0x001000000000778d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000007664
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000757f
- (void)copyTo:(id)arg1;	// IMP=0x00100000000074db
- (void)writeTo:(id)arg1;	// IMP=0x001000000000743c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000717c
- (id)dictionaryRepresentation;	// IMP=0x0010000000006fff
- (id)description;	// IMP=0x0010000000006f50
@property(nonatomic) _Bool hasTaskSequenceNumber;
@property(readonly, nonatomic) _Bool hasCurrentRequest;
@property(readonly, nonatomic) _Bool hasOriginalRequest;
@property(readonly, nonatomic) _Bool hasTask;

@end

