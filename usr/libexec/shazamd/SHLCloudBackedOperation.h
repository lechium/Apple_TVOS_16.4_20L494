//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDatabaseOperation;

@interface SHLCloudBackedOperation : NSObject
{
    CKDatabaseOperation *_privateOperation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000f100
@property(retain, nonatomic) CKDatabaseOperation *privateOperation; // @synthesize privateOperation=_privateOperation;
@property(readonly, nonatomic) CKDatabaseOperation *operation;
- (id)initWithOperation:(id)arg1;	// IMP=0x001000000000ef60

@end
