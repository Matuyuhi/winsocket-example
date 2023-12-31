# winsocket-example
`winsock2.h` を使用して、1つのサーバーと複数のクライアント間でのメッセージ送受信を行うサンプルプログラムです。

- サーバーは各クライアントに一意のIDを割り当てて識別します。
- メッセージの送受信をクライアントやサーバーで同時に行うには、スレッドなどの並行処理の技術が必要です。
- クライアント側では、サーバーからのレスポンスを待つために別スレッドを使用します。
- サーバー側でもメッセージを送信する場合は、類似の処理を実装する必要があります。
- グループチャットのような動作をします。
- 実際の使用時には、適宜例外処理を追加してください。
  <img width="600" alt="スクリーンショット 2023-12-21 1 44 23" src="https://github.com/Matuyuhi/winsocket-example/assets/92073990/3a070487-a1af-4a72-a5cf-03145733a72b">
