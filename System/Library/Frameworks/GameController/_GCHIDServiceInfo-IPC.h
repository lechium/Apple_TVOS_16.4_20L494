//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameControllerFoundation/_GCHIDServiceInfo.h>

@class NSData, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface _GCHIDServiceInfo (IPC)
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier;
- (id)initWithService:(struct __IOHIDServiceClient *)arg1;	// IMP=0x002000000006a638
- (id)name;	// IMP=0x002000000006a777
@property(retain, nonatomic) NSData *inputData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

