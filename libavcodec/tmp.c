#include"avcodec.h"

static av_cold int tmp_decode_init(AVCodecContext *avctx) {
    return 0;
}

static av_cold int tmp_decode_close(AVCodecContext *avctx) {
    return 0;
}

static int tmp_decode_frame(AVCodecContext *avctx, void *data, int *got_output, AVPacket *avpkt) {
    return 0;
}

AVCodec ff_tmp_decoder = {
    .name = "tmp",
    .long_name = NULL_IF_CONFIG_SMALL("temp decoder for test"),
    .type = AVMEDIA_TYPE_VIDEO,
    .id = AV_CODEC_ID_TMP,
    .init = tmp_decode_init,
    .close = tmp_decode_close,
    .decode = tmp_decode_frame,
};


