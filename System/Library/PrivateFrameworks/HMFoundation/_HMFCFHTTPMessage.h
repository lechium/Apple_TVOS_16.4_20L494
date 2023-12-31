//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMFObject.h"

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPMessage : HMFObject
{
    struct __CFHTTPMessage *_message;	// 8 = 0x8
}

+ (id)responseWithStatusCode:(long long)arg1 statusDescription:(id)arg2 protocolVersion:(long long)arg3;	// IMP=0x006000000000946a
+ (id)requestWithMethod:(id)arg1 url:(id)arg2 protocolVersion:(long long)arg3;	// IMP=0x0060000000009383
+ (id)dateFormatter;	// IMP=0x006000000000927b
@property(readonly, nonatomic) struct __CFHTTPMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSData *body;
- (void)setContentLength:(long long)arg1;	// IMP=0x000000000000990f
- (long long)contentLength;	// IMP=0x00000000000098b1
- (void)setContentType:(id)arg1;	// IMP=0x0000000000009895
- (id)contentType;	// IMP=0x0000000000009879
- (void)setDate:(id)arg1;	// IMP=0x00000000000097d4
- (id)date;	// IMP=0x0000000000009742
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;	// IMP=0x00000000000096d3
- (id)valueForHeaderField:(id)arg1;	// IMP=0x000000000000967b
@property(readonly, nonatomic) NSDictionary *headerFields;
- (void)dealloc;	// IMP=0x0000000000009605
- (id)initWithMessageRef:(struct __CFHTTPMessage *)arg1;	// IMP=0x00000000000095af
- (id)init;	// IMP=0x0000000000009507

@end

