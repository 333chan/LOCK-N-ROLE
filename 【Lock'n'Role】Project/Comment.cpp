#include "DxLib.h"
#include "Comment.h"

void Comment::Init()
{
}

void Comment::Update()
{
}

void Comment::Draw(int textNo)
{


}

void Comment::Release()
{
}

std::string Comment::Storage2(int commentNum)
{
	switch (commentNum)
	{
	case 1:
		return "加藤:どうしよう…";
		break;
	case 2:
		return "加藤:あのー...失礼ですが、どちら様でしょうか？";
		break;
	case 3:
		return "女性:私か？私は籏 優以、考古学の教授をやっている、そういう君は？";
		break;
	case 4:
		return "加藤:加藤　洸秀です。専門学校に通っています、となりの方は...?";
		break;
	case 5:
		return "男性:私の名前は木島　信弘、小学校で教員をやっているよ";
		break;
	case 6:
		return "加藤:ここ、どこなんでしょう？、僕は知らないのですが、二人とも知ってたり...";
		break;
	case 7:
		return "木島:私は知らないですね、籏さんは？";
		break;
	case 8:
		return "籏:私もしらないね。色々な所を見て回ってきたけどこんな場所を見たのは初めてだ。";
		break;
	case 9:
		return "加藤:どうしましょう？";
		break;
	case 10:
		return "籏:どうするもなにもロッカーしか見当たらないし、あれを調べたらいいんじゃないか？";
		break;
	case 11:
		return "木島:そうですね…、私もその意見に賛成です。加藤さんは？";
		break;
	case 12:
		return "加藤:自分も賛成です";
		break;
	case 13:
		return "加藤:「ロッカーの鍵」?このロッカーの数字は、どういうことでしょう";
		break;
	case 14:
		return "籏:んーわからないね。とりあえず開けてみよう、どのロッカーも鍵穴がないし";
		break;

	case 15:
		return "木島:中になにかありましたか？";
		break;

	case 16:
		return "加藤:色々入ってます。内壁には「ものを全部外に出して閉めること」と書いてますね。";
		break;
	case 17:
		return "籏:中に入っている物調べたいから、書いてあるとうりに全部出して閉めてよう。";
		break;

	case 18:
		return "加藤:開かない…、鍵がかかっているようです。";
		break;
	case 19:
		return "木島:鍵穴も無いのに不思議ですね。";
		break;
	case 20:
		return "籏:とりあえず出したものを詳しく調べてみよう。";
		break;
	case 21:
		return "木島:そういえば、皆さんなにか物をもっていたりしますか？\n僕はバックの中に授業で使う九九のプレートがあるんですが";
		break;
	case 22:
		return"加藤:スマホだけですね、電源がつきませんが。";
		break;
	case 23:
		return "籏:私もまったく一緒";
		break;
	case 24:
		return "加藤:ここを出るヒントにはなりそうに無いですね";
		break;
	case 25:
		return "籏:気を取り直して出したものを調べようか";
	case 26:
		return "加藤:まず温度計ですね";
		break;
	case 27:
		return "加藤:何か測るのでしょうか？";
		break;
	case 28:
		return "籏:さぁ？";
		break;
	case 29:
		return "加藤:次は鍋ですね。なにかいやな感じがしますが";
		break;
	case 30:
		return "加藤:あちっ!";
		break;
	case 31:
		return "木島:大丈夫かい？";
		break;
	case 32:
		return "加藤:大丈夫です、すぐに手を離したので";
		break;
	case 33:
		return "木島:よかった…次からは気をつけてください";
		break;

	case 34:
		return "加藤:この鍋裏に100って書いていますね、ロッカーと同じ数字だ。";
		break;
	case 35:
		return "木島:そういえば音がしたロッカーを調べていませんでしたね";
		break;
	case 36:
		return "籏:そうだね。開くかどうか試して見よう";
		break;
	case 37:
		return "籏:んー中には何もないね。内壁に「一度に開くロッカーはひとつずつ」って書いてるだけだ。\n特に何もなさそうだし先にだした物を調べよう";
		break;

	case 38:
		return "加藤:次はさっき使ったミトンですね。\nところどころところどころ焦げてる以外普通のミトンっぽいですが";
		break;
	case 39:
		return "籏:なら次はこの本だね。私は知らないけど知ってる？";
		break;
	case 40:
		return "加藤:知らない本ですね、木島さんは？";
		break;
	case 41:
		return "木島:残念ながら私も知りません。";
		break;
	case 42:
		return "加藤:なら次ですね。えーと次はこのカイロですね";
		break;
	case 43:
		return "加藤:67ってかいていますね、また何かロッカーと関係が？";
		break;
	case 44:
		return "籏:かもね。けど今は出した物を先に調べよう";
		break;
	case 45:
		return "木島:そうですね。となると次はこの薬ですが";
		break;
	case 46:
		return "木島:何に使うんでしょうか？";
		break;
	case 47:
		return "加藤:わかりません、とりあえずおいておきましょう";
		break;
	case 48:
		return "加藤:後残りはぬいぐるみと水ですか、ぬいぐるみの方は…";
		break;
	case 49:
		return "加藤:タグに23って書いていますね。水は特に怪しい所は無いようです、これで全部調べましたね";
		break;

	case 50:
		return "籏:お疲れ様。さてこれからどうするか";
		break;
	case 51:
		return "木島:100のロッカーに鍋をいれてみませんか？同じ数字ですし。";
		break;
	case 52:
		return "加藤:そうですね。現状それぐらいしか関係が見出せませんし。";
		break;

	case 53:
		return "加藤:開かなくなりました。隣のロッカーからも音がしましたね";
		break;

	case 54:
		return "木島:正解…ということでしょうか？";
		break;

	case 55:
		return "加藤:わかりません、隣のロッカーを開けてみます";
		break;

	case 56:
		return "籏:どうだい？なにかあったかい？";
		break;

	case 57:
		return "加藤:何もありませんね。ただ内壁に\n「鍵があいてから一度閉まったロッカーは開かない。少なくとも君が生きているうちは」\nと書いてあるだけです";
		break;

	case 58:
		return "木島:嫌な例えですね。";
		break;

	case 59:
		return "籏:23だからえーと、ぬいぐるみだな";
		break;

	case 60:
		return "加藤:次は67のロッカーからの音でしたね。67だとホッカイロですね";
		break;

	case 61:
		return "木島:終わりがみえてきましたね";
		break;

	case 62:
		return "籏:それじゃ67のロッカーも開けてみよう";
		break;

	case 63:
		return "籏:何かあったかい？";
		break;

	case 64:
		return "加藤:内壁に\n「さて、そろそろ君にもここの仕組みがわかってきたかな。\n次のロッカーの中にはプレゼントを用意しているよ。気に入ってくれるかな」\nと書いてあるだけですね";
		break;


	case 65:
		return "木島:プレゼントですか…。変な物では無ければいいのですが";
		break;
	case 66:
		return "加藤:とりあえずホッカイロを入れて閉じますね";
		break;

	case 67:
		return "加藤:隣の36のロッカーが開いたようです確認してみましょう";
		break;

	case 68:
		return "籏:おーい、君～、大丈夫～？";
		break;

	case 69:
		return "加藤:大丈…夫です。中にはなにもありませんでした。";
		break;

	case 70:
		return "籏:何もないのか、36…何をいれればいいんだ？";
		break;

	case 71:
		return "木島:入れるものに指定ありませんでしたよね？";
		break;

	case 72:
		return "加藤:そうですね。ただ数字が書いていたものを入れていただけなので";
		break;

	case 73:
		return "木島:だったらこの九九の教材でいけないでしょうか？";
		break;

	case 74:
		return "籏:そうか!6×6＝36のプレートがあれば数字はあってる";
		break;

	case 75:
		return "加藤:入れて閉めてみますね";
		break;

	case 76:
		return "籏:ドアが出てきた…、ドアノブはあるけど開いているのか？";
		break;

	case 77:
		return "加藤:出口でしょうか？";
		break;

	case 78:
		return "木島:行って見ないことにはわかりませんね。行きましょう";
		break;

	case 79:
		return "籏:そうだね、出口だったら早くこんな所出たいしね。先にどうぞ";
		break;

	case 80:
		return "加藤:わかりました。ではお言葉に甘えて";
		break;
	
	case 81:
		return "おはよう、今日の算数は九九だよ。一緒に頑張ろうね";
		break;

	case 82:
		return "今電車に乗ってそっち向かってるよー、…うん　大丈夫だって、心配性なんだから。\nお土産もあるって伝えておいてね。";
		break;

	default:
		break;
	}
}
