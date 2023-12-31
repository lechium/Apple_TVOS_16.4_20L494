//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SOSAccount;

@interface SOSCircleStorageTransport : NSObject
{
    SOSAccount *account;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000002148f6
@property(retain, nonatomic) SOSAccount *account; // @synthesize account;
- (struct __CFArray *)handleCircleMessagesAndReturnHandledCopy:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x00100000002148be
- (struct __CFDictionary *)handleRetirementMessages:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000021489a
- (_Bool)postRetirement:(struct __CFString *)arg1 peer:(struct __OpaqueSOSPeerInfo *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000214892
- (_Bool)postCircle:(struct __CFString *)arg1 circleData:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000021488a
- (_Bool)flushChanges:(struct __CFError **)arg1;	// IMP=0x0010000000214882
- (_Bool)expireRetirementRecords:(struct __CFDictionary *)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000021487a
- (long long)getTransportType;	// IMP=0x0010000000214872
- (long long)circleGetTypeID;	// IMP=0x001000000021486a
- (id)getAccount;	// IMP=0x0010000000214858
- (id)initWithAccount:(id)arg1;	// IMP=0x00100000002147f0
- (id)init;	// IMP=0x00100000002147c1

@end

