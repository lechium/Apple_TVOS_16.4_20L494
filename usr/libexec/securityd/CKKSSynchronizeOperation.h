//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSKeychainView, CKKSOperationDependencies;

@interface CKKSSynchronizeOperation
{
    int _restartCount;	// 12 = 0xc
    CKKSKeychainView *_ckks;	// 16 = 0x10
    CKKSOperationDependencies *_deps;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000ba409
@property int restartCount; // @synthesize restartCount=_restartCount;
@property(retain) CKKSOperationDependencies *deps; // @synthesize deps=_deps;
@property __weak CKKSKeychainView *ckks; // @synthesize ckks=_ckks;
- (void)groupStart;	// IMP=0x00100000000b9995
- (id)initWithCKKSKeychainView:(id)arg1 dependencies:(id)arg2;	// IMP=0x00100000000b98ec
- (id)init;	// IMP=0x00100000000b98de

@end

