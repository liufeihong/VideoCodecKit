//
//  VCRTMPSession+ProtocolControlMessageHandler.h
//  VideoCodecKit
//
//  Created by CmST0us on 2020/2/6.
//  Copyright © 2020 eric3u. All rights reserved.
//

#import "VCRTMPSession.h"

NS_ASSUME_NONNULL_BEGIN

@interface VCRTMPSession (ProtocolControlMessageHandler)
- (void)handleMessageTypeWindowAcknowledgement:(VCRTMPChunk *)chunk;
- (void)handleSetPeerBandwidthValue:(VCRTMPChunk *)chunk;
- (void)handleSetChunkSize:(VCRTMPChunk *)chunk;
- (void)handleAMF0Command:(VCRTMPChunk *)chunk;
@end

NS_ASSUME_NONNULL_END
