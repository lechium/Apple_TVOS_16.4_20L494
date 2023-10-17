//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKUploadRequestMetadata;

@interface CKDMarkAssetBrokenURLRequest : CKDURLRequest
{
    _Bool _writeRepairRecord;	// 8 = 0x8
    CDUnknownBlockType _assetBrokenBlock;	// 16 = 0x10
    CKUploadRequestMetadata *_metadata;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003510ea
@property(nonatomic) _Bool writeRepairRecord; // @synthesize writeRepairRecord=_writeRepairRecord;
@property(copy, nonatomic) CKUploadRequestMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) CDUnknownBlockType assetBrokenBlock; // @synthesize assetBrokenBlock=_assetBrokenBlock;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x0000000000350fd5
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x0000000000350db6
- (id)generateRequestOperations;	// IMP=0x0000000000350943
- (id)requestOperationClasses;	// IMP=0x00000000003508d7
- (id)initWithOperation:(id)arg1 assetOrPackageMetadata:(id)arg2 writeRepairRecord:(_Bool)arg3;	// IMP=0x000000000035084d

@end

